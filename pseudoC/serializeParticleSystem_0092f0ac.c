// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeParticleSystem
// Entry Point: 0092f0ac
// Size: 5044 bytes
// Signature: undefined __cdecl serializeParticleSystem(ParticleSystemDesc * param_1, char * param_2, uint param_3, uint param_4, FileOutputStream * param_5)


/* I3DSaveUtil::serializeParticleSystem(ParticleSystemDesc const&, char const*, unsigned int,
   unsigned int, FileOutputStream&) */

void I3DSaveUtil::serializeParticleSystem
               (ParticleSystemDesc *param_1,char *param_2,uint param_3,uint param_4,
               FileOutputStream *param_5)

{
  FileOutputStream FVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined8 extraout_x1_47;
  undefined8 extraout_x1_48;
  undefined8 extraout_x1_49;
  undefined8 extraout_x1_50;
  undefined8 extraout_x1_51;
  undefined8 extraout_x1_52;
  undefined8 extraout_x1_53;
  undefined8 extraout_x1_54;
  undefined8 extraout_x1_55;
  undefined8 extraout_x1_56;
  undefined8 uVar5;
  FileOutputStream *pFVar6;
  long *plVar7;
  long **pplVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_b8;
  undefined2 local_b7;
  undefined local_b5;
  byte local_b0 [16];
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined auStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ParticleSystemDesc::ParticleSystemDesc((ParticleSystemDesc *)&local_130);
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0x3dcccccd000003e8;
  uStack_108 = 0x3a83126f;
  local_110 = 0x3f0000003f000000;
  local_b8 = 0;
  local_114 = 0x447a0000;
  local_11c = 0;
  local_f4 = 0x3e4ccccd3eb33333;
  local_100 = 0;
  local_f8 = 0;
  local_b7 = 0;
  local_ec = 0x3f4ccccd;
  local_b5 = 0;
  local_d8 = 0x3f800000;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0x100000001;
  local_c0 = 0x447a0000;
  local_98 = 0;
                    /* try { // try from 0092f178 to 0093041b has its CatchHandler @ 00930460 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)local_b0);
  pFVar6 = param_5 + 0x10;
  FVar1 = *pFVar6;
  local_90 = 0;
  pplVar8 = (long **)(param_5 + 8);
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("    <ParticleSystem name=\"",0x1b);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"    <ParticleSystem name=\"");
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"    <ParticleSystem name=\"",uVar3);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk(param_2,0xffffffffffffffff);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,param_2);
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,param_2,uVar3);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" dynamicId=\"",0xe);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" dynamicId=\"");
    uVar5 = extraout_x1_00;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" dynamicId=\"",uVar3);
    uVar5 = extraout_x1;
  }
  uVar4 = FUN_00930af0(auStack_88,uVar5,&DAT_004cf2ba,param_3);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" type=\"sprite",0xf);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" type=\"sprite");
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" type=\"sprite",uVar3);
  }
  if (param_4 != 0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" particleShapeId=\"",0x14);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" particleShapeId=\"");
      uVar5 = extraout_x1_02;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" particleShapeId=\"",uVar3);
      uVar5 = extraout_x1_01;
    }
    uVar4 = FUN_00930af0(auStack_88,uVar5,&DAT_004cf2ba,param_4);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" rate=\"",9);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" rate=\"");
    uVar5 = extraout_x1_04;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" rate=\"",uVar3);
    uVar5 = extraout_x1_03;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0xc),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" lifespan=\"",0xd);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" lifespan=\"");
    uVar5 = extraout_x1_06;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" lifespan=\"",uVar3);
    uVar5 = extraout_x1_05;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x1c),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  if (param_1[0x78] != (ParticleSystemDesc)0x0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" lifespanInfinite=\"true",0x19);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" lifespanInfinite=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" lifespanInfinite=\"true",uVar3);
    }
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" maxCount=\"",0xd);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" maxCount=\"");
    uVar5 = extraout_x1_08;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" maxCount=\"",uVar3);
    uVar5 = extraout_x1_07;
  }
  uVar4 = FUN_00930af0(auStack_88,uVar5,&DAT_004c7f7a,*(undefined4 *)(param_1 + 8));
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  if (*(int *)(param_1 + 0x10) != 0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" maxEmit=\"",0xc);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" maxEmit=\"");
      uVar5 = extraout_x1_10;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" maxEmit=\"",uVar3);
      uVar5 = extraout_x1_09;
    }
    uVar4 = FUN_00930af0(auStack_88,uVar5,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (0.0 < *(float *)(param_1 + 0x14)) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitStartTime=\"",0x12);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitStartTime=\"");
      uVar5 = extraout_x1_12;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitStartTime=\"",uVar3);
      uVar5 = extraout_x1_11;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x14),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (0.0 < *(float *)(param_1 + 0x18)) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitStopTime=\"",0x11);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitStopTime=\"");
      uVar5 = extraout_x1_14;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitStopTime=\"",uVar3);
      uVar5 = extraout_x1_13;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x18),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" speed=\"",10);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" speed=\"");
    uVar5 = extraout_x1_16;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" speed=\"",uVar3);
    uVar5 = extraout_x1_15;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x28),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" speedRandom=\"",0x10);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" speedRandom=\"");
    uVar5 = extraout_x1_18;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" speedRandom=\"",uVar3);
    uVar5 = extraout_x1_17;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x2c),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" tangentSpeed=\"",0x11);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" tangentSpeed=\"");
    uVar5 = extraout_x1_20;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" tangentSpeed=\"",uVar3);
    uVar5 = extraout_x1_19;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x5c),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" normalSpeed=\"",0x10);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" normalSpeed=\"");
    uVar5 = extraout_x1_22;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" normalSpeed=\"",uVar3);
    uVar5 = extraout_x1_21;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x58),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  if (*(float *)(param_1 + 0x50) != 0.0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitterShapeVelocityScale=\"",0x1e);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitterShapeVelocityScale=\"");
      uVar5 = extraout_x1_24;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitterShapeVelocityScale=\"",uVar3);
      uVar5 = extraout_x1_23;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x50),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (*(float *)(param_1 + 0x54) != 0.0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" damping=\"",0xc);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" damping=\"");
      uVar5 = extraout_x1_26;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" damping=\"",uVar3);
      uVar5 = extraout_x1_25;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x54),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" spriteScaleX=\"",0x11);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" spriteScaleX=\"");
    uVar5 = extraout_x1_28;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" spriteScaleX=\"",uVar3);
    uVar5 = extraout_x1_27;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x20),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" spriteScaleY=\"",0x11);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" spriteScaleY=\"");
    uVar5 = extraout_x1_30;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" spriteScaleY=\"",uVar3);
    uVar5 = extraout_x1_29;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x24),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  if (*(float *)(param_1 + 0x4c) != 0.0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" spriteScaleXGain=\"",0x15);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" spriteScaleXGain=\"");
      uVar5 = extraout_x1_32;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" spriteScaleXGain=\"",uVar3);
      uVar5 = extraout_x1_31;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x4c),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (*(float *)(param_1 + 0x48) != 0.0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" spriteScaleYGain=\"",0x15);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" spriteScaleYGain=\"");
      uVar5 = extraout_x1_34;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" spriteScaleYGain=\"",uVar3);
      uVar5 = extraout_x1_33;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x48),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" blendFactor=\"",0x10);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" blendFactor=\"");
    uVar5 = extraout_x1_36;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" blendFactor=\"",uVar3);
    uVar5 = extraout_x1_35;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x3c),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" blendInFactor=\"",0x12);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" blendInFactor=\"");
    uVar5 = extraout_x1_38;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" blendInFactor=\"",uVar3);
    uVar5 = extraout_x1_37;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x40),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("\" blendOutFactor=\"",0x13);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"\" blendOutFactor=\"");
    uVar5 = extraout_x1_40;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"\" blendOutFactor=\"",uVar3);
    uVar5 = extraout_x1_39;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x44),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  if (param_1[0x79] != (ParticleSystemDesc)0x0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" depthSort=\"true",0x12);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" depthSort=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" depthSort=\"true",uVar3);
    }
  }
  if (param_1[0x7a] != (ParticleSystemDesc)0x0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" buildTangents=\"true",0x16);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" buildTangents=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" buildTangents=\"true",uVar3);
    }
  }
  if (param_1[0x7b] != (ParticleSystemDesc)0x0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" randomInitRotation=\"true",0x1b);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" randomInitRotation=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" randomInitRotation=\"true",uVar3);
    }
  }
  if (*(float *)(param_1 + 0x60) != 0.0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" deltaRotateMin=\"",0x13);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" deltaRotateMin=\"");
      uVar5 = extraout_x1_42;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" deltaRotateMin=\"",uVar3);
      uVar5 = extraout_x1_41;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x60),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (*(float *)(param_1 + 100) != 0.0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" deltaRotateMax=\"",0x13);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" deltaRotateMax=\"");
      uVar5 = extraout_x1_44;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" deltaRotateMax=\"",uVar3);
      uVar5 = extraout_x1_43;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 100),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (*(int *)(param_1 + 0x68) != 1) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" textureAtlasSizeX=\"",0x16);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" textureAtlasSizeX=\"");
      uVar5 = extraout_x1_46;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" textureAtlasSizeX=\"",uVar3);
      uVar5 = extraout_x1_45;
    }
    uVar4 = FUN_00930af0(auStack_88,uVar5,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x68));
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (*(int *)(param_1 + 0x6c) != 1) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" textureAtlasSizeY=\"",0x16);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" textureAtlasSizeY=\"");
      uVar5 = extraout_x1_48;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" textureAtlasSizeY=\"",uVar3);
      uVar5 = extraout_x1_47;
    }
    uVar4 = FUN_00930af0(auStack_88,uVar5,&DAT_004cf2ba,*(undefined4 *)(param_1 + 0x6c));
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (*(float *)(param_1 + 0x70) != (float)local_c0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitTrianglesLifespan=\"",0x1a);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitTrianglesLifespan=\"");
      uVar5 = extraout_x1_50;
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitTrianglesLifespan=\"",uVar3);
      uVar5 = extraout_x1_49;
    }
    uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x70),auStack_88,uVar5,&DAT_0050d9a5);
    (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  }
  if (((byte)param_1[0x74] >> 1 & 1) != 0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitDestructionCollision=\"true",0x21);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitDestructionCollision=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitDestructionCollision=\"true",uVar3);
    }
  }
  if (((byte)param_1[0x74] & 1) != 0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitDestructionBreak=\"true",0x1d);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitDestructionBreak=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitDestructionBreak=\"true",uVar3);
    }
  }
  if (((byte)param_1[0x74] >> 2 & 1) != 0) {
    FVar1 = *pFVar6;
    plVar7 = *pplVar8;
    uVar3 = __strlen_chk("\" emitDestructionChunkDelete=\"true",0x23);
    if (FVar1 == (FileOutputStream)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,"\" emitDestructionChunkDelete=\"true");
    }
    else {
      File::writeDosEOLExpand((File *)plVar7,"\" emitDestructionChunkDelete=\"true",uVar3);
    }
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk(&DAT_004ddf6f,4);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&DAT_004ddf6f);
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,&DAT_004ddf6f,uVar3);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("      <Gravity force=\"",0x17);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"      <Gravity force=\"");
    uVar5 = extraout_x1_52;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"      <Gravity force=\"",uVar3);
    uVar5 = extraout_x1_51;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x30),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk(&DAT_004d3339,2);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&DAT_004d3339);
    uVar5 = extraout_x1_54;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,&DAT_004d3339,uVar3);
    uVar5 = extraout_x1_53;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x34),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk(&DAT_004d3339,2);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&DAT_004d3339);
    uVar5 = extraout_x1_56;
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,&DAT_004d3339,uVar3);
    uVar5 = extraout_x1_55;
  }
  uVar4 = FUN_00930af0((double)*(float *)(param_1 + 0x38),auStack_88,uVar5,&DAT_0050d9a5);
  (**(code **)(**pplVar8 + 0x30))(*pplVar8,auStack_88,uVar4);
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk(&DAT_004ddf8b,5);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&DAT_004ddf8b);
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,&DAT_004ddf8b,uVar3);
  }
  FVar1 = *pFVar6;
  plVar7 = *pplVar8;
  uVar3 = __strlen_chk("    </ParticleSystem>\n",0x17);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,"    </ParticleSystem>\n");
  }
  else {
    File::writeDosEOLExpand((File *)plVar7,"    </ParticleSystem>\n",uVar3);
  }
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


