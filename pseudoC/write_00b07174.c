// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 00b07174
// Size: 116 bytes
// Signature: undefined __thiscall write(UGCProtection * this, void * param_1, uint param_2)


/* UGCProtection::write(void const*, unsigned int) */

undefined4 __thiscall UGCProtection::write(UGCProtection *this,void *param_1,uint param_2)

{
  undefined4 uVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)operator_new__((ulong)param_2);
  CustomStreamCipher::encrypt(*(CustomStreamCipher **)(this + 0x18),(uchar *)param_1,param_2,puVar2)
  ;
  uVar1 = (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),puVar2,param_2);
  operator_delete__(puVar2);
  return uVar1;
}


