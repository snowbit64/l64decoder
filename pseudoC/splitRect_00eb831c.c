// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitRect
// Entry Point: 00eb831c
// Size: 244 bytes
// Signature: undefined __cdecl splitRect(uint param_1, Rect3d * param_2, Rect3d * param_3, Rect3d * param_4, float * param_5)


/* FLOAT_MATH::splitRect(unsigned int, FLOAT_MATH::Rect3d<float> const&, FLOAT_MATH::Rect3d<float>&,
   FLOAT_MATH::Rect3d<float>&, float const*) */

void FLOAT_MATH::splitRect
               (uint param_1,Rect3d *param_2,Rect3d *param_3,Rect3d *param_4,float *param_5)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  
  if (param_1 == 2) {
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    fVar2 = param_5[2];
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(float *)(param_3 + 0x14) = fVar2;
    fVar2 = param_5[2];
    *(undefined8 *)param_4 = *(undefined8 *)param_2;
    *(float *)(param_4 + 8) = fVar2;
  }
  else {
    if (param_1 == 1) {
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
      fVar2 = param_5[1];
      uVar1 = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(float *)(param_3 + 0x10) = fVar2;
      *(undefined4 *)(param_3 + 0x14) = uVar1;
      fVar2 = param_5[1];
      uVar1 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)param_4 = *(undefined4 *)param_2;
      *(float *)(param_4 + 4) = fVar2;
      *(undefined4 *)(param_4 + 8) = uVar1;
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      goto LAB_00eb83f8;
    }
    if (param_1 != 0) {
      return;
    }
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(float *)(param_3 + 0xc) = *param_5;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 4);
    *(float *)param_4 = *param_5;
    *(undefined8 *)(param_4 + 4) = uVar3;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
LAB_00eb83f8:
  *(undefined4 *)(param_4 + 0xc) = uVar1;
  *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return;
}


