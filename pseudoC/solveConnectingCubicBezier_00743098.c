// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConnectingCubicBezier
// Entry Point: 00743098
// Size: 92 bytes
// Signature: undefined __cdecl solveConnectingCubicBezier(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, Vector2 * param_4, Vector2 * param_5, float param_6)


/* solveConnectingCubicBezier(Vector2*, Vector2 const&, Vector2 const&, Vector2 const&, Vector2
   const&, float) */

void solveConnectingCubicBezier
               (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4,Vector2 *param_5
               ,float param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar2 = NEON_fmadd(*(undefined4 *)param_3,param_6,(int)uVar1);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_3 + 4),param_6,(int)((ulong)uVar1 >> 0x20));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar2 = NEON_fmsub(*(undefined4 *)param_5,param_6,(int)uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = NEON_fmsub(*(undefined4 *)(param_5 + 4),param_6,(int)((ulong)uVar1 >> 0x20));
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


