// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Create
// Entry Point: 00d9fa80
// Size: 184 bytes
// Signature: undefined __cdecl Create(Implementation param_1, _func_void_ptr_ulong_ulong * param_2, _func_void_void_ptr * param_3)


/* MaskedOcclusionCulling::Create(MaskedOcclusionCulling::Implementation, void* (*)(unsigned long,
   unsigned long), void (*)(void*)) */

void MaskedOcclusionCulling::Create
               (Implementation param_1,_func_void_ptr_ulong_ulong *param_2,
               _func_void_void_ptr *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_2)(0x40,0x150);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0xffffffffffffffff;
  puVar1[0x22] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_SetResolution_01013000;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x124) = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0x3f800000;
  puVar1[0x16] = 0xff800000;
  *(undefined8 *)((long)puVar1 + 300) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x19] = 0x3f800000;
  puVar1[0x18] = 0x7f800000;
  puVar1[0x1b] = 0x3f800000;
  puVar1[0x1a] = 0xff80000000000000;
  puVar1[0x27] = 0;
  puVar1[0x1d] = 0x3f800000;
  puVar1[0x1c] = 0x7f80000000000000;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  return;
}


