What is Swrve
-------------
Swrve is a single integrated platform delivering everything you need to drive mobile engagement and create valuable consumer relationships on mobile.  
This native iOS SDK will enable your app to use all of these features.

Getting started
---------------
Have a look at the quick integration guide at http://docs.swrve.com/developer-documentation/integration/ios/

Installing using CocoaPods
--------------------------
Add the following line to your Podfile
```
pod ‘SwrveSDK’
```

### Carthage  iOS8 + 

[Carthage](https://github.com/Carthage/Carthage) is a decentralized dependency manager that builds your dependencies and provides you with binary frameworks.

You can install Carthage with [Homebrew](http://brew.sh/) using the following command:

```bash
$ brew update
$ brew install carthage
```

To integrate Swrve into your Xcode project using Carthage, specify it in your `Cartfile`:

Create a [Cartfile][] in the root of your project and add the following line:

```ogdl
github "KevBrodigan/swrve-ios-sdk" "carthage"
```

Run `carthage update --platform iOS` to build the framework and drag the built `SwrveFramework.framework` into your Xcode project at “General” settings tab, in the “Linked Frameworks and Libraries” section

On your application targets’ “Build Phases” settings tab, click the “+” icon and choose “New Run Script Phase”. Create a Run Script in which you specify your shell (ex: `/bin/sh`), add the following contents to the script area below the shell:

```sh
/usr/local/bin/carthage copy-frameworks
```

Add the path to the framework under “Input Files”, e.g.:

```
$(SRCROOT)/Carthage/Build/iOS/SwrveFramework.framework
```

Add the path to the copied framework to the “Output Files”, e.g.:

```
$(BUILT_PRODUCTS_DIR)/$(FRAMEWORKS_FOLDER_PATH)/SwrveFramework.framework
```

With output files specified alongside the input files, Xcode only needs to run the script when the input files have changed or the output files are missing. This means dirty builds will be faster when you haven't rebuilt frameworks with Carthage.


Requirements
------------
### Xcode (latest)
The SDK supports iOS 6+ and the latest version of Xcode (Xcode 6, as the time of writing).

How to run the demo
-------------------
- Open the project located under SwrveDemo/SwrveDemoFramework.xcodeproj
- Run on your device or on the emulator.
- Change the App ID and Api Key in the Settings with the values provided by Swrve.

Contributing
------------
We would love to see your contributions! Follow these steps:

1. Fork this repository.
2. Create a branch (`git checkout -b my_awesome_feature`)
3. Commit your changes (`git commit -m "Awesome feature"`)
4. Push to the branch (`git push origin my_awesome_feature`)
5. Open a Pull Request.

License
-------
© Copyright Swrve Mobile Inc or its licensors. Distributed under the [Apache 2.0 License](LICENSE).
