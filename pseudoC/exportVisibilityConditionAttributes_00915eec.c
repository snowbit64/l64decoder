// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportVisibilityConditionAttributes
// Entry Point: 00915eec
// Size: 2164 bytes
// Signature: undefined __cdecl exportVisibilityConditionAttributes(TransformGroup * param_1, FileOutputStream * param_2)


/* I3DSave::exportVisibilityConditionAttributes(TransformGroup const&, FileOutputStream&) */

void I3DSave::exportVisibilityConditionAttributes(TransformGroup *param_1,FileOutputStream *param_2)

{
  char *pcVar1;
  FileOutputStream FVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
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
  undefined8 uVar9;
  short *psVar10;
  undefined auStack_78 [32];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (((DAT_010fe330 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_010fe330), iVar7 != 0)) {
    DAT_010fe310 = 0;
    DAT_010fe318 = 0;
    DAT_010fe328 = '\0';
    DAT_010fe320 = 0;
    DAT_010fe32c = 1.0;
    __cxa_guard_release(&DAT_010fe330);
  }
  if (((byte)param_1[0x41] >> 1 & 1) == 0) goto LAB_009166c0;
  psVar10 = *(short **)(param_1 + 0xf8);
  if (psVar10 == (short *)0x0) {
LAB_009165f0:
    plVar8 = *(long **)(param_2 + 8);
    if (param_2[0x10] == (FileOutputStream)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8," weatherPreventMask=\"",0x15);
      uVar9 = extraout_x1_17;
    }
    else {
      File::writeDosEOLExpand((File *)plVar8," weatherPreventMask=\"",0x15);
      uVar9 = extraout_x1_16;
    }
    uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004cf2ba,DAT_010fe318._4_4_);
  }
  else {
    if (((short)DAT_010fe310 == *psVar10) || (DAT_010fe310._2_2_ == psVar10[1])) {
      bVar4 = false;
    }
    else {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," minuteOfDayStart=\"",0x13);
        uVar9 = extraout_x1_02;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," minuteOfDayStart=\"",0x13);
        uVar9 = extraout_x1_00;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004c7f7a,*psVar10);
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," minuteOfDayEnd=\"",0x11);
        uVar9 = extraout_x1_06;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," minuteOfDayEnd=\"",0x11);
        uVar9 = extraout_x1_04;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004c7f7a,psVar10[1]);
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if ((DAT_010fe310._4_2_ != psVar10[2]) && (DAT_010fe310._6_2_ != psVar10[3])) {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," dayOfYearStart=\"",0x11);
        uVar9 = extraout_x1_01;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," dayOfYearStart=\"",0x11);
        uVar9 = extraout_x1;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004c7f7a,psVar10[2]);
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," dayOfYearEnd=\"",0xf);
        uVar9 = extraout_x1_05;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," dayOfYearEnd=\"",0xf);
        uVar9 = extraout_x1_03;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004c7f7a,psVar10[3]);
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if ((int)DAT_010fe318 != *(int *)(psVar10 + 4)) {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," weatherRequiredMask=\"",0x16);
        uVar9 = extraout_x1_08;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," weatherRequiredMask=\"",0x16);
        uVar9 = extraout_x1_07;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004cf2ba,*(undefined4 *)(psVar10 + 4));
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if (DAT_010fe318._4_4_ != *(int *)(psVar10 + 6)) {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," weatherPreventMask=\"",0x15);
        uVar9 = extraout_x1_10;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," weatherPreventMask=\"",0x15);
        uVar9 = extraout_x1_09;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004cf2ba,*(undefined4 *)(psVar10 + 6));
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if ((int)DAT_010fe320 != *(int *)(psVar10 + 8)) {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," viewerSpacialityRequiredMask=\"",0x1f);
        uVar9 = extraout_x1_12;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," viewerSpacialityRequiredMask=\"",0x1f);
        uVar9 = extraout_x1_11;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004cf2ba,*(undefined4 *)(psVar10 + 8));
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if (DAT_010fe320._4_4_ != *(int *)(psVar10 + 10)) {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," viewerSpacialityPreventMask=\"",0x1e);
        uVar9 = extraout_x1_14;
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," viewerSpacialityPreventMask=\"",0x1e);
        uVar9 = extraout_x1_13;
      }
      uVar5 = FUN_0091faa0(auStack_78,uVar9,&DAT_004cf2ba,*(undefined4 *)(psVar10 + 10));
      (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if (DAT_010fe328 != *(char *)(psVar10 + 0xc)) {
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8," renderInvisible=\"",0x12);
      }
      else {
        File::writeDosEOLExpand((File *)plVar8," renderInvisible=\"",0x12);
      }
      FVar2 = param_2[0x10];
      pcVar1 = "false";
      if (*(char *)(psVar10 + 0xc) != '\0') {
        pcVar1 = "true";
      }
      plVar8 = *(long **)(param_2 + 8);
      uVar6 = __strlen_chk(pcVar1,6);
      if (FVar2 == (FileOutputStream)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,pcVar1);
      }
      else {
        File::writeDosEOLExpand((File *)plVar8,pcVar1,uVar6);
      }
      plVar8 = *(long **)(param_2 + 8);
      if (param_2[0x10] == (FileOutputStream)0x0) {
        bVar4 = true;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
      }
      else {
        bVar4 = true;
        File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
      }
    }
    if (DAT_010fe32c == *(float *)(psVar10 + 0xe)) {
      if (bVar4) goto LAB_009166c0;
      goto LAB_009165f0;
    }
    plVar8 = *(long **)(param_2 + 8);
    if (param_2[0x10] == (FileOutputStream)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8," visibleShaderParameter=\"",0x19);
      uVar9 = extraout_x1_18;
    }
    else {
      File::writeDosEOLExpand((File *)plVar8," visibleShaderParameter=\"",0x19);
      uVar9 = extraout_x1_15;
    }
    uVar5 = FUN_0091faa0((double)*(float *)(psVar10 + 0xe),auStack_78,uVar9,&DAT_0050d9a5);
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x30))(*(long **)(param_2 + 8),auStack_78,uVar5);
  plVar8 = *(long **)(param_2 + 8);
  if (param_2[0x10] == (FileOutputStream)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004e56b4,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar8,&DAT_004e56b4,1);
  }
LAB_009166c0:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


