[Rainmeter]
Update=-1
Group=HoneycombNG
RightMouseUpAction=[!SkinCustomMenu]

ContextTitle=Edit config
ContextAction=["#CONFIGEDITOR#" "#@#config.inc"]
ContextTitle2=Refresh HoneycombNG
ContextAction2=[!RefreshGroup HoneycombNG]
ContextTitle3=-
ContextAction3=
ContextTitle4=Open skin menu
ContextAction4=[!SkinMenu]

[IncludeConfig]
@IncludeConfig=#@#config.inc

[Variables]
; Internal variables
Blank=#@#\Base\blank.png
Mono=#@#\Icons\#Type#\mono\#Icon#.png
MonoName=#@#\Icons\#Type#\mono\#IconMonoName#.png
Overlay=#@#\Icons\#Type#\overlay\#Icon#.png
@IncludeBase=#@#Variants/base_#Base#.inc
