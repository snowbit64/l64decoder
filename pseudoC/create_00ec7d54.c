// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 00ec7d54
// Size: 128 bytes
// Signature: undefined __cdecl create(double * param_1, uint param_2, uint * param_3, uint param_4)


/* aabbtree::AABBTree::create(double const*, unsigned int, unsigned int const*, unsigned int) */

undefined8 * aabbtree::AABBTree::create(double *param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  puVar1[2] = param_1;
  *(uint *)(puVar1 + 3) = param_2;
  puVar1[4] = param_3;
  *(uint *)(puVar1 + 5) = param_4;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_raycast_01014780;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  AABBTreeImpl::Build();
  return puVar1;
}


