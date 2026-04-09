// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getValue
// Entry Point: 00c41b84
// Size: 80 bytes
// Signature: undefined __cdecl getValue(uint param_1, vector * param_2)


/* IR_Section::getValue(unsigned int, std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> > const&) */

void IR_Section::getValue(uint param_1,vector *param_2)

{
  long *in_x2;
  undefined8 *in_x8;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (-1 < (int)(uint)param_2) {
    puVar1 = (undefined8 *)(*in_x2 + ((ulong)param_2 & 0xffffffff) * 0x20);
    uVar2 = *puVar1;
    uVar4 = puVar1[3];
    uVar3 = puVar1[2];
    in_x8[1] = puVar1[1];
    *in_x8 = uVar2;
    in_x8[3] = uVar4;
    in_x8[2] = uVar3;
    return;
  }
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(ulong)param_1 + 0x80) + (ulong)((uint)param_2 & 0x7fffffff) * 0x18);
  *(undefined4 *)(in_x8 + 3) = 0xffffffff;
  uVar3 = *puVar1;
  uVar2 = puVar1[2];
  in_x8[1] = puVar1[1];
  *in_x8 = uVar3;
  in_x8[2] = uVar2;
  return;
}


