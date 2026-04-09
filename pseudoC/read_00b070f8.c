// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b070f8
// Size: 124 bytes
// Signature: undefined __thiscall read(UGCProtection * this, void * param_1, uint param_2)


/* UGCProtection::read(void*, unsigned int) */

uint __thiscall UGCProtection::read(UGCProtection *this,void *param_1,uint param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)operator_new__((ulong)param_2);
  uVar1 = (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),puVar2,param_2);
  if (0 < (int)uVar1) {
    CustomStreamCipher::decrypt(*(CustomStreamCipher **)(this + 0x18),puVar2,uVar1,(uchar *)param_1)
    ;
  }
  operator_delete__(puVar2);
  return uVar1;
}


