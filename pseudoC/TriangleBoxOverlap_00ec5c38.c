// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TriangleBoxOverlap
// Entry Point: 00ec5c38
// Size: 208 bytes
// Signature: undefined __thiscall TriangleBoxOverlap(aabbtree * this, XVector3 param_1, XVector3 param_2, XVector3 param_3, XVector3 param_4, XVector3 param_5, undefined param_6, undefined param_7, undefined1[16] param_8, undefined8 param_9, undefined1[16] param_10, undefined8 param_11, undefined1[16] param_12, undefined8 param_13)


/* aabbtree::TriangleBoxOverlap(aabbtree::XVector3<double>, aabbtree::XVector3<double>,
   aabbtree::XVector3<double>, aabbtree::XVector3<double>, aabbtree::XVector3<double>) */

void __thiscall
aabbtree::TriangleBoxOverlap
          (aabbtree *this,XVector3 param_1,XVector3 param_2,XVector3 param_3,XVector3 param_4,
          XVector3 param_5,undefined param_6,undefined param_7,undefined1 param_8 [16],
          undefined8 param_9,undefined1 param_10 [16],undefined8 param_11,undefined1 param_12 [16],
          undefined8 param_13)

{
  long lVar1;
  int iVar2;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  double in_d4;
  double in_d5;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_88 = (in_d0 + in_d3) * 0.5;
  dStack_80 = (in_d1 + in_d4) * 0.5;
  local_a0 = (in_d3 - in_d0) * 0.5;
  local_28 = *(long *)(lVar1 + 0x28);
  local_98 = (in_d4 - in_d1) * 0.5;
  local_78 = (in_d2 + in_d5) * 0.5;
  local_90 = (in_d5 - in_d2) * 0.5;
  uStack_68 = param_8._8_8_;
  local_70 = (double)param_8._0_8_;
  local_60 = param_9;
  uStack_50 = param_10._8_8_;
  local_58 = param_10._0_8_;
  local_48 = param_11;
  uStack_38 = param_12._8_8_;
  local_40 = param_12._0_8_;
  local_30 = param_13;
  iVar2 = triBoxOverlap(&local_88,&local_a0,&local_70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}


