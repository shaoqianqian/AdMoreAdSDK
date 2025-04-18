Pod::Spec.new do |s|
  s.name         = 'AdMoreSDK'
  s.version      = '3.2.0'
  s.summary      = 'A closed-source advertising SDK for iOS.'
  s.description  = 'AdMoreSDK is a private advertising framework distributed as a precompiled binary.'
  s.homepage     = 'https://github.com/shaoqianqian/AdMoreAdSDK'
  s.license      = { :type => 'Commercial', :text => 'Copyright © 2025 SCMAdSDK. All rights reserved.' }
  s.author       = { 'qianqian' => '5989@qq.com' } # 可选
  s.platform     = :ios, '11.0'

  # ⚠️ 修改为你的 .framework 真实 zip 下载地址
  s.source       = { :http => 'https://github.com/shaoqianqian/AdMoreAdSDK/releases/download/3.2.0/AdMoreSDK.xcframework.zip' }

  s.vendored_frameworks = 'AdMoreSDK.xcframework'

  # 如果有使用系统库，请在这里添加
  s.frameworks = 'UIKit', 'Foundation'

  # 如果支持 Swift，建议加上
  s.requires_arc = true

  # 添加依赖项
  #s.dependency 'GDTMobSDK', '4.15.22'
  #s.dependency 'Ads-CN-Beta/BUAdSDK', '6.7.0.3'
  #s.dependency 'Ads-CN-Beta/CSJMediation', '6.7.0.3'
  #s.dependency 'KSAdSDK', '3.3.74'
  #s.dependency 'BaiduMobAdSDK', '5.373'
  #s.dependency 'JADYun', '2.6.8'
  #s.dependency 'JADYunMotion', '2.6.8'
  #s.dependency 'QMAdSDK', '1.3.2'
  # s.dependency 'UBiXMediationSDK', '2.7.1.0001'
  # s.dependency 'GDTMobSDK', '4.15.22'
  # s.dependency 'KSAdSDK', '3.3.74'
  # s.dependency 'UBiXMJDAdapter', '2.6.8.1' 
  # s.dependency 'JADYun', '2.6.8' 
  # s.dependency 'JADYunMotion','2.6.8'
  # s.dependency 'UBiXMUBiXAdapter', '2.5.1.0'
  # s.dependency 'UBiXMBaiduAdapter', '5.373.0'
  # #s.dependency 'Ads-CN-Beta','6.7.0.3', :subspecs => ['BUAdSDK', 'CSJMediation']
  # s.dependency 'UBiXMQMAdapter','1.3.2.0'
  # s.dependency 'UBiXMYoushiAdapter', '1.0.1.0.0'
  # s.dependency 'UBiXMOneAdSDK','1.0.1.0'

  s.dependency 'UBiXMediationSDK', '2.8.0.01'
  s.dependency 'UBiXMUBiXAdapter', '2.6.1.0' 
  s.dependency 'UBiXMCSJAdapter', '6.8.0.2.0' 
  s.dependency 'GDTMobSDK', '4.15.30' 
  s.dependency 'KSAdSDK', '3.3.75' 
  s.dependency 'UBiXMJDAdapter', '2.6.8.1' 
  s.dependency 'UBiXMBaiduAdapter', '5.38.0' 
  s.dependency 'UBiXMQMAdapter', '1.3.3.2' 
  s.dependency 'QMAdSDK', '1.3.3' 
  s.dependency 'UBiXMYoushiAdapter', '1.0.3.0' 
  s.dependency 'UBiXMOneAdSDK','1.0.3'
end
