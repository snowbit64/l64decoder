// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00c739a8
// Size: 188 bytes
// Signature: undefined __thiscall GetVoidValue(CombinedNameValuePairs * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::CombinedNameValuePairs::GetVoidValue(char const*, std::type_info const&, void*) const
    */

undefined8 __thiscall
CryptoPP::CombinedNameValuePairs::GetVoidValue
          (CombinedNameValuePairs *this,char *param_1,type_info *param_2,void *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = strcmp(param_1,"ValueNames");
  uVar2 = (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),param_1,param_2,param_3);
  if (iVar1 == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else if ((uVar2 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00c73a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                    (*(long **)(this + 0x10),param_1,param_2,param_3);
  return uVar3;
}


