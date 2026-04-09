// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadParticleSystem
// Entry Point: 00904a0c
// Size: 1240 bytes
// Signature: undefined __cdecl loadParticleSystem(ParticleSystemDesc * param_1, void * param_2, char * param_3, char * * param_4)


/* I3DDynamicsPoolFactory::loadParticleSystem(ParticleSystemDesc&, void*, char const*, char const**)
    */

void I3DDynamicsPoolFactory::loadParticleSystem
               (ParticleSystemDesc *param_1,void *param_2,char *param_3,char **param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)(param_1 + 8) = 0x3dcccccd000003e8;
  *(float *)(param_1 + 0x1c) = 1000.0;
  *(undefined8 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined8 *)(param_1 + 0x20) = 0x3f0000003f000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x79) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0x3e4ccccd3eb33333;
  *(float *)(param_1 + 0x44) = 0.8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x7b] = (ParticleSystemDesc)0x0;
  puVar7 = (undefined8 *)(param_1 + 0x68);
  *puVar7 = 0x100000001;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x78] = (ParticleSystemDesc)0x0;
  *(undefined8 *)(param_1 + 0x70) = 0x447a0000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  ExpatUtil::getAttr("name",param_4);
  pcVar3 = (char *)ExpatUtil::getAttr("dynamicId",param_4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(param_1 + 0x80));
  if (pcVar3 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = atoi(pcVar3);
  }
  *(int *)(*(long *)((long)param_2 + 0x290) + 0xa8) = iVar1;
  pcVar3 = (char *)ExpatUtil::getAttr("particleShapeId",param_4);
  if (pcVar3 != (char *)0x0) {
    uVar2 = atoi(pcVar3);
    lVar4 = I3DLoad::findShape((I3DLoad *)param_2,uVar2);
    if (lVar4 != 0) {
      uVar5 = Geometry::getCollisionProxyMesh();
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
    }
  }
  ExpatUtil::getIntAttr("maxCount",(int *)(param_1 + 8),param_4);
  ExpatUtil::getFloatAttr("rate",(float *)(param_1 + 0xc),param_4);
  ExpatUtil::getUIntAttr("maxEmit",(uint *)(param_1 + 0x10),param_4);
  ExpatUtil::getFloatAttr("emitStartTime",(float *)(param_1 + 0x14),param_4);
  ExpatUtil::getFloatAttr("emitStopTime",(float *)(param_1 + 0x18),param_4);
  ExpatUtil::getBoolAttr("lifespanInfinite",(bool *)(param_1 + 0x78),param_4);
  ExpatUtil::getFloatAttr("speed",(float *)(param_1 + 0x28),param_4);
  ExpatUtil::getFloatAttr("speedRandom",(float *)(param_1 + 0x2c),param_4);
  ExpatUtil::getFloatAttr("tangentSpeed",(float *)(param_1 + 0x5c),param_4);
  ExpatUtil::getFloatAttr("normalSpeed",(float *)(param_1 + 0x58),param_4);
  ExpatUtil::getFloatAttr("lifespan",(float *)(param_1 + 0x1c),param_4);
  ExpatUtil::getFloatAttr("spriteScaleX",(float *)(param_1 + 0x20),param_4);
  ExpatUtil::getFloatAttr("spriteScaleY",(float *)(param_1 + 0x24),param_4);
  ExpatUtil::getBoolAttr("depthSort",(bool *)(param_1 + 0x79),param_4);
  ExpatUtil::getBoolAttr("buildTangents",(bool *)(param_1 + 0x7a),param_4);
  ExpatUtil::getFloatAttr("blendFactor",(float *)(param_1 + 0x3c),param_4);
  ExpatUtil::getFloatAttr("blendInFactor",(float *)(param_1 + 0x40),param_4);
  ExpatUtil::getFloatAttr("blendOutFactor",(float *)(param_1 + 0x44),param_4);
  ExpatUtil::getFloatAttr("spriteScaleXGain",(float *)(param_1 + 0x4c),param_4);
  ExpatUtil::getFloatAttr("spriteScaleYGain",(float *)(param_1 + 0x48),param_4);
  ExpatUtil::getFloatAttr("emitterShapeVelocityScale",(float *)(param_1 + 0x50),param_4);
  ExpatUtil::getFloatAttr("damping",(float *)(param_1 + 0x54),param_4);
  ExpatUtil::getBoolAttr("randomInitRotation",(bool *)(param_1 + 0x7b),param_4);
  ExpatUtil::getFloatAttr("deltaRotateMin",(float *)(param_1 + 0x60),param_4);
  ExpatUtil::getFloatAttr("deltaRotateMax",(float *)(param_1 + 100),param_4);
  uVar6 = ExpatUtil::getUIntAttr("textureAtlasSizeX",(uint *)puVar7,param_4);
  if ((uVar6 & 1) == 0) {
    ExpatUtil::getUIntAttr("textureAtlasSize",(uint *)puVar7,param_4);
  }
  ExpatUtil::getUIntAttr("textureAtlasSizeY",(uint *)(param_1 + 0x6c),param_4);
  ExpatUtil::getFloatAttr("emitTrianglesLifespan",(float *)(param_1 + 0x70),param_4);
  uVar6 = ExpatUtil::getBoolAttrRet("emitDestructionCollision",false,param_4);
  uVar2 = 2;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffd | uVar2;
  uVar2 = ExpatUtil::getBoolAttrRet("emitDestructionBreak",false,param_4);
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffe | uVar2 & 1;
  uVar6 = ExpatUtil::getBoolAttrRet("emitDestructionChunkDelete",false,param_4);
  uVar2 = 4;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffb | uVar2;
  return;
}


