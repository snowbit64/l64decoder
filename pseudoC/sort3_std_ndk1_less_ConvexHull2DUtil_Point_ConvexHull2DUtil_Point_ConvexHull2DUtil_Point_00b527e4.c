// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
// Entry Point: 00b527e4
// Size: 420 bytes
// Signature: uint __cdecl __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>(Point * param_1, Point * param_2, Point * param_3, __less * param_4)


/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,
   ConvexHull2DUtil::Point>&, ConvexHull2DUtil::Point*>(ConvexHull2DUtil::Point*,
   ConvexHull2DUtil::Point*, ConvexHull2DUtil::Point*, std::__ndk1::__less<ConvexHull2DUtil::Point,
   ConvexHull2DUtil::Point>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
               (Point *param_1,Point *param_2,Point *param_3,__less *param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  fVar7 = *(float *)param_2;
  if ((*(float *)param_1 <= fVar7) &&
     ((fVar7 != *(float *)param_1 || (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4))))) {
    if (fVar7 <= *(float *)param_3) {
      if (*(float *)param_3 == fVar7) {
        if (*(float *)(param_3 + 4) < *(float *)(param_2 + 4)) goto LAB_00b52880;
      }
      uVar3 = 0;
      goto LAB_00b52964;
    }
LAB_00b52880:
    uVar6 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined4 *)(param_2 + 8) = uVar6;
    *(undefined8 *)param_3 = uVar5;
    *(undefined4 *)(param_3 + 8) = uVar1;
    if (*(float *)param_2 < *(float *)param_1) {
LAB_00b528c4:
      uVar6 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar3 = 2;
      *(undefined4 *)(param_1 + 8) = uVar6;
      *(undefined8 *)param_2 = uVar5;
      *(undefined4 *)(param_2 + 8) = uVar1;
      goto LAB_00b52964;
    }
    if (*(float *)param_2 == *(float *)param_1) {
      if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) goto LAB_00b528c4;
    }
    goto LAB_00b52958;
  }
  if (*(float *)param_3 < fVar7) {
LAB_00b52840:
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    uVar3 = 1;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  else {
    if (*(float *)param_3 == fVar7) {
      if (*(float *)(param_3 + 4) < *(float *)(param_2 + 4)) goto LAB_00b52840;
    }
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_1;
    uVar1 = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined8 *)param_2 = uVar5;
    *(undefined4 *)(param_2 + 8) = uVar1;
    if (*(float *)param_2 <= *(float *)param_3) {
      if (*(float *)param_3 == *(float *)param_2) {
        if (*(float *)(param_3 + 4) < *(float *)(param_2 + 4)) goto LAB_00b52930;
      }
LAB_00b52958:
      uVar3 = 1;
      goto LAB_00b52964;
    }
LAB_00b52930:
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    uVar3 = 2;
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  *(undefined8 *)param_3 = uVar5;
  *(undefined4 *)(param_3 + 8) = uVar6;
LAB_00b52964:
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


