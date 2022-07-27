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
            targets: ["StaticJumioLibrary"]),
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
        .binaryTarget(name: "BAMCheckout", path: "frameworks/BAMCheckout.xcframework"),
        .binaryTarget(name: "DocumentVerification", path: "frameworks/DocumentVerification.xcframework"),
        .binaryTarget(name: "JumioCore", path: "frameworks/JumioCore.xcframework"),
        .binaryTarget(name: "JumioNFC", path: "frameworks/JumioNFC.xcframework"),
        .binaryTarget(name: "Microblink", path: "frameworks/Microblink.xcframework"),
        .binaryTarget(name: "NetVerify", path: "frameworks/NetVerify.xcframework"),
        .binaryTarget(name: "NetVerifyBarcode", path: "frameworks/NetVerifyBarcode.xcframework"),
        .binaryTarget(name: "SocketIO", path: "frameworks/SocketIO.xcframework"),
        .binaryTarget(name: "Starscream", path: "frameworks/Starscream.xcframework"),
    ]
)
