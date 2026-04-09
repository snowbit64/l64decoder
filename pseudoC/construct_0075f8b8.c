// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 0075f8b8
// Size: 200 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* JointConstructor::construct(MethodInvocation*) */

void JointConstructor::construct(MethodInvocation *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0xb) = 0x101;
  puVar1[3] = 0x3f80000000000000;
  puVar1[2] = 0x3f800000;
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(undefined *)((long)puVar1 + 0x5a) = 1;
  *(undefined4 *)((long)puVar1 + 0x5c) = 7;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x1a] = 0xbf800000bf800000;
  puVar1[0x19] = 0xbf80000000000000;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined4 *)((long)puVar1 + 0x54) = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0xbf800000;
  puVar1[0x15] = 0xbf800000bf800000;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  *(undefined4 *)(puVar1 + 0x2b) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  return;
}


