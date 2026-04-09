// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073f79c
// Entry Point: 0073f79c
// Size: 336 bytes
// Signature: undefined FUN_0073f79c(void)


void FUN_0073f79c(float param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar2 = (float)coordOnQuadraticBezier((param_1 + param_2) * 0.5,*(Vector2 **)*param_3,1);
  if ((*(float *)param_3[1] < fVar2) && (fVar2 < *(float *)param_3[2])) {
    fVar2 = (float)arcLengthQuadraticBezier(*(Vector2 **)*param_3,param_1,param_2);
    fVar5 = *(float *)param_3[3];
    *(float *)param_3[3] = fVar2 + fVar5;
    if (((DAT_01052c90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01052c90), iVar1 != 0)) {
      DAT_01052c88 = 0x3ec3ef163f6c835e;
      __cxa_guard_release(&DAT_01052c90);
    }
    uVar3 = tangentQuadraticBezier(param_1,*(Vector2 **)*param_3);
    fVar2 = fVar5;
    uVar4 = tangentQuadraticBezier(param_2,*(Vector2 **)*param_3);
    fVar5 = (float)NEON_fmadd(uVar3,DAT_01052c88._4_4_,(float)DAT_01052c88 * -fVar5);
    fVar2 = (float)NEON_fmadd(uVar4,DAT_01052c88._4_4_,(float)DAT_01052c88 * -fVar2);
    *(byte *)(param_3[3] + 4) =
         (byte)(1 << (fVar5 < 0.0)) | *(byte *)(param_3[3] + 4) | (byte)(1 << (fVar2 < 0.0));
  }
  return;
}


