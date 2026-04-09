// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitRect
// Entry Point: 00ec0320
// Size: 244 bytes
// Signature: undefined __cdecl splitRect(uint param_1, Rect3d * param_2, Rect3d * param_3, Rect3d * param_4, double * param_5)


/* FLOAT_MATH::splitRect(unsigned int, FLOAT_MATH::Rect3d<double> const&,
   FLOAT_MATH::Rect3d<double>&, FLOAT_MATH::Rect3d<double>&, double const*) */

void FLOAT_MATH::splitRect
               (uint param_1,Rect3d *param_2,Rect3d *param_3,Rect3d *param_4,double *param_5)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  
  if (param_1 == 2) {
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    dVar2 = param_5[2];
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = uVar1;
    *(double *)(param_3 + 0x28) = dVar2;
    uVar1 = *(undefined8 *)param_2;
    dVar2 = param_5[2];
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_4 = uVar1;
    *(double *)(param_4 + 0x10) = dVar2;
  }
  else {
    if (param_1 == 1) {
      *(undefined8 *)param_3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      dVar2 = param_5[1];
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(double *)(param_3 + 0x20) = dVar2;
      *(undefined8 *)(param_3 + 0x28) = uVar1;
      dVar2 = param_5[1];
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)param_4 = *(undefined8 *)param_2;
      *(double *)(param_4 + 8) = dVar2;
      *(undefined8 *)(param_4 + 0x10) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      goto LAB_00ec03fc;
    }
    if (param_1 != 0) {
      return;
    }
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(double *)(param_3 + 0x18) = *param_5;
    *(undefined8 *)(param_3 + 0x28) = uVar3;
    *(undefined8 *)(param_3 + 0x20) = uVar1;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(double *)param_4 = *param_5;
    *(undefined8 *)(param_4 + 0x10) = uVar3;
    *(undefined8 *)(param_4 + 8) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
LAB_00ec03fc:
  *(undefined8 *)(param_4 + 0x18) = uVar1;
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}


