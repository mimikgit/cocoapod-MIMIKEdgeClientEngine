# PLEASE NOTE THIS REPOSITORY IS NO LONGER BEING MAINTAINED

# THE NEXT GENERATION CLIENT LIBRARY IS AVAILABLE HERE: https://github.com/mimikgit/cocoapod-mimOE-SE-iOS-developer

#
# MIMIKEdgeClientEngine

MIMIKEdgeClientEngine library can help you interact with mimik edgeEngine framework with the following APIs:
 
 # edgeEngine Services

 * `startEdgeEngine`
 * `stopEdgeEngine`
 * `restartEdgeEngine`
 * `resetEdgeEngine`
 * `edgeEngineIsRunning` 
 * `edgeEngineStartupParameters`
 * `edgeEngineExpectedVersion`
 * `isCurrentNode`
 * `defaultNodeName`
 * `effectiveUrl`
 * `setCustomPortNumber`

Please see the in-code documentation in Xcode for more details.

## Supported Platforms, Targets
* `iOS devices running iOS 15+`

**Mac Catalyst or iOS simulators are NOT supported**

## Requirements
```
iOS 15.0+
iOS Device
MIMIKEdgeClientCore pod
```

## Installation

To install it, simply add the following lines to your Podfile:

```swift
platform :ios, '15.0'
source 'https://github.com/CocoaPods/Specs.git'
source 'https://github.com/mimikgit/cocoapod-edge-specs.git'

use_frameworks!
inhibit_all_warnings!

def mimik
  pod 'MIMIKEdgeClientEngine'
  pod 'MIMIKEdgeClientCore'
end

target '{target}' do
  mimik()
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ENABLE_BITCODE'] = 'NO'
      config.build_settings['VALID_ARCHS'] = '$(ARCHS_STANDARD_64_BIT)'
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '15.0'
      config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
    end
  end
end
```

## Tutorial

Visit this [tutorial](https://devdocs.mimik.com/tutorials/03-index) to learn more about the mimik client library and how to integrate it into your iOS project.

## mimik client and service libraries

Don't forget to checkout all mimik client and service libraries [available on Github](https://github.com/search?q=cocoapod-MIMIKEdgeClient)

Direct links:
 
 * [MIMIKEdgeClientCore](https://github.com/mimikgit/cocoapod-MIMIKEdgeClientCore)
 * [MIMIKEdgeClientEngine](https://github.com/mimikgit/cocoapod-MIMIKEdgeClientEngine)
 * [MIMIKEdgeClientUser](https://github.com/mimikgit/cocoapod-MIMIKEdgeClientUser)

## Author

mimik
```
https://github.com/mimikgit/cocoapod-MIMIKEdgeClientUser
```

## License

The aforementioned mimik client and service libraries are available under the MIT license. See the LICENSE file for more information.
