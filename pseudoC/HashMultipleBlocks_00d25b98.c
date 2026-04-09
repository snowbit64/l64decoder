// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashMultipleBlocks
// Entry Point: 00d25b98
// Size: 348 bytes
// Signature: undefined __thiscall HashMultipleBlocks(SHA224 * this, uint * param_1, ulong param_2)


/* CryptoPP::SHA224::HashMultipleBlocks(unsigned int const*, unsigned long) */

ulong __thiscall CryptoPP::SHA224::HashMultipleBlocks(SHA224 *this,uint *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(*(long *)this + 0xa8))();
  puVar3 = (uint *)(**(code **)(*(long *)this + 0xc0))(this);
  if (iVar2 == 0) {
    do {
      FUN_00d24ef0(*(undefined8 *)(this + 0xd0),param_1);
      param_1 = param_1 + 0x10;
      param_2 = param_2 - 0x40;
    } while (0x3f < param_2);
  }
  else {
    do {
      uVar4 = *(undefined8 *)(this + 0xd0);
      uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      *puVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      puVar3[1] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
      puVar3[2] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
      puVar3[3] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      puVar3[4] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[5] & 0xff00ff00) >> 8 | (param_1[5] & 0xff00ff) << 8;
      puVar3[5] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      puVar3[6] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      puVar3[7] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[8] & 0xff00ff00) >> 8 | (param_1[8] & 0xff00ff) << 8;
      puVar3[8] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[9] & 0xff00ff00) >> 8 | (param_1[9] & 0xff00ff) << 8;
      puVar3[9] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[10] & 0xff00ff00) >> 8 | (param_1[10] & 0xff00ff) << 8;
      puVar3[10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[0xb] & 0xff00ff00) >> 8 | (param_1[0xb] & 0xff00ff) << 8;
      puVar3[0xb] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[0xc] & 0xff00ff00) >> 8 | (param_1[0xc] & 0xff00ff) << 8;
      puVar3[0xc] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[0xd] & 0xff00ff00) >> 8 | (param_1[0xd] & 0xff00ff) << 8;
      puVar3[0xd] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[0xe] & 0xff00ff00) >> 8 | (param_1[0xe] & 0xff00ff) << 8;
      puVar3[0xe] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (param_1[0xf] & 0xff00ff00) >> 8 | (param_1[0xf] & 0xff00ff) << 8;
      puVar3[0xf] = uVar1 >> 0x10 | uVar1 << 0x10;
      FUN_00d24ef0(uVar4,puVar3);
      param_2 = param_2 - 0x40;
      param_1 = param_1 + 0x10;
    } while (0x3f < param_2);
  }
  return param_2;
}


