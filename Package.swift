// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "StaticJumioLibrary",
    defaultLocalization: "en",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "StaticJumioLibrary",
            targets: ["StaticJumioLibrary", "Jumio"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "StaticJumioLibrary",
            dependencies: []),
        .binaryTarget(name: "Jumio", url: "https://github.com/Jumio/mobile-sdk-ios/archive/refs/tags/v4.2.0.zip", checksum: "387fb4fe83ef5a7a597009ed00d6f03ef2858b57")
    ]
)
