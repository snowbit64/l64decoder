// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b31670
// Size: 124 bytes
// Signature: undefined __thiscall read(CompressedFile * this, void * param_1, uint param_2)


/* CompressedFile::read(void*, unsigned int) */

ulong __thiscall CompressedFile::read(CompressedFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(this + 0x218) == 0) {
    fetch();
  }
  uVar2 = *(uint *)(this + 0x224);
  uVar1 = *(uint *)(this + 0x220) - uVar2;
  if (uVar2 + param_2 <= *(uint *)(this + 0x220)) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    memcpy(param_1,(void *)(*(long *)(this + 0x218) + (ulong)uVar2),(ulong)uVar1);
    *(uint *)(this + 0x224) = *(int *)(this + 0x224) + uVar1;
  }
  return (ulong)uVar1;
}


