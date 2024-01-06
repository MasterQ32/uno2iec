{
  description = "microzig development environment";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/release-23.05";
  };

  outputs = {
    self,
    nixpkgs,
  }: let
    pkgs = nixpkgs.legacyPackages.x86_64-linux;
  in {
    packages.x86_64-linux = {
      default = pkgs.stdenv.mkDerivation {
        name = "uno2iec";
        nativeBuildInputs = [
          pkgs.qt5.qmake
        ];
        buildInputs = [
          pkgs.qt5.qtbase
          pkgs.qt5.qtserialport
          pkgs.qt5.wrapQtAppsHook
        ];
        src = ./.;
        buildPhase = ''
          qmake rpi2iec.pro "PREFIX=$out" "CONFIG-=debug" "CONFIG+=release"
          make -j
          ls
        '';
        installPhase = ''
          make install
        '';
      };
    };
  };
}
