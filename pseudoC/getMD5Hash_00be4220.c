// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMD5Hash
// Entry Point: 00be4220
// Size: 64 bytes
// Signature: undefined __thiscall getMD5Hash(MD5Hash * this, uchar * param_1)


/* MD5Hash::getMD5Hash(unsigned char*) */

void __thiscall MD5Hash::getMD5Hash(MD5Hash *this,uchar *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00be425c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x80))(this,param_1,uVar1);
  return;
}


