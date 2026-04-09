// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_createVertexIndex
// Entry Point: 00eb79f8
// Size: 140 bytes
// Signature: undefined __cdecl fm_createVertexIndex(double param_1, bool param_2)


/* FLOAT_MATH::fm_createVertexIndex(double, bool) */

void FLOAT_MATH::fm_createVertexIndex(double param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_getIndex_01014588;
  uVar2 = 3;
  if (!param_2) {
    uVar2 = 1;
  }
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[2] = param_1;
  *(undefined *)(puVar1 + 1) = uVar2;
  puVar1[4] = &PTR_getPositionDouble_01014618;
  *(float *)(puVar1 + 3) = (float)param_1;
  *(undefined *)(puVar1 + 5) = 1;
  return;
}


