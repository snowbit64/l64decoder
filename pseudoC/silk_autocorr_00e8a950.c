// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_autocorr
// Entry Point: 00e8a950
// Size: 72 bytes
// Signature: undefined silk_autocorr(void)


void silk_autocorr(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4,int param_5
                  ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_4;
  if (param_5 <= param_4) {
    iVar1 = param_5;
  }
  uVar2 = _celt_autocorr(param_3,param_1,0,0,iVar1 + -1,param_4,param_6);
  *param_2 = uVar2;
  return;
}


