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
            targets: ["StaticJumioLibrary", "JumioMobileSDK-3.9.4"]),
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
        .binaryTarget(name: "JumioMobileSDK-3.9.4", url: "https://mobile-sdk.jumio.com/com/jumio/ios/jumio-mobile-sdk/3.9.4/ios-jumio-mobile-sdk-3.9.4.zip", checksum: "76fae770aee8993c8d210583bdf7ed73e3c0c890838df570367787cf68fb084a")
    ]
)
