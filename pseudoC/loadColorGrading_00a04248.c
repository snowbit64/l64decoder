// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadColorGrading
// Entry Point: 00a04248
// Size: 1360 bytes
// Signature: undefined __thiscall loadColorGrading(PostFxParams * this, DomXMLFile * param_1, ColorGradingCB * param_2)


/* PostFxParams::loadColorGrading(DomXMLFile*, PostFxParams::ColorGradingCB&) */

void __thiscall
PostFxParams::loadColorGrading(PostFxParams *this,DomXMLFile *param_1,ColorGradingCB *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading",(char *)0x0,
                     "shadowsMaxLuminance",1.0);
  *(undefined4 *)(param_2 + 0x100) = uVar2;
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading",(char *)0x0,
                     "highlightsMinLuminance",1.0);
  *(undefined4 *)(param_2 + 0x104) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.global.saturation",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)param_2,3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.global.saturation",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.global.contrast",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x10),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.global.contrast",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.global.gamma",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x20),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.global.gamma",(char *)0x0,"scale"
                     ,1.0);
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.global.gain",(char *)0x0
                              ,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x30),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.global.gain",(char *)0x0,"scale",
                     1.0);
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.shadows.saturation",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x40),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.shadows.saturation",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0x4c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.shadows.contrast",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x50),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.shadows.contrast",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0x5c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.shadows.gamma",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x60),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.shadows.gamma",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.shadows.gain",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x70),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.shadows.gain",(char *)0x0,"scale"
                     ,1.0);
  *(undefined4 *)(param_2 + 0x7c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.midtones.saturation",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x80),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.midtones.saturation",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0x8c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.midtones.contrast",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0x90),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.midtones.contrast",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0x9c) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.midtones.gamma",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0xa0),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.midtones.gamma",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0xac) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.midtones.gain",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0xb0),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.midtones.gain",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0xbc) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.highlights.saturation",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0xc0),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.highlights.saturation",
                     (char *)0x0,"scale",1.0);
  *(undefined4 *)(param_2 + 0xcc) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.highlights.contrast",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0xd0),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.highlights.contrast",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0xdc) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.highlights.gamma",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0xe0),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.highlights.gamma",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0xec) = uVar2;
  pcVar1 = (char *)AttributedProperties::getStringAttribute
                             ((AttributedProperties *)param_1,"colorGrading.highlights.gain",
                              (char *)0x0,"rgb","1 1 1");
  StringUtil::splitIntoFloats(pcVar1,(float *)(param_2 + 0xf0),3,' ');
  uVar2 = AttributedProperties::getFloatAttribute
                    ((AttributedProperties *)param_1,"colorGrading.highlights.gain",(char *)0x0,
                     "scale",1.0);
  *(undefined4 *)(param_2 + 0xfc) = uVar2;
  return;
}


