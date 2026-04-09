// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compareProperties
// Entry Point: 00a78f40
// Size: 472 bytes
// Signature: undefined __thiscall compareProperties(BitmapImage * this, BitmapImage * param_1, char * param_2, uint param_3)


/* BitmapImage::compareProperties(BitmapImage const&, char*, unsigned int) const */

bool __thiscall
BitmapImage::compareProperties(BitmapImage *this,BitmapImage *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  
  if ((((((*(int *)(this + 8) == *(int *)(param_1 + 8)) &&
         (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) &&
        (*(int *)(this + 0x10) == *(int *)(param_1 + 0x10))) &&
       ((*(int *)(this + 0x18) == *(int *)(param_1 + 0x18) &&
        (*(int *)(this + 4) == *(int *)(param_1 + 4))))) &&
      ((*(int *)(this + 0x14) == *(int *)(param_1 + 0x14) &&
       ((*(int *)(this + 0x34) == *(int *)(param_1 + 0x34) &&
        (*(int *)(this + 0x38) == *(int *)(param_1 + 0x38))))))) &&
     ((*(int *)(this + 0x28) == *(int *)(param_1 + 0x28) &&
      (*(int *)(this + 0x30) == *(int *)(param_1 + 0x30))))) {
    bVar1 = this[0x2c] == param_1[0x2c];
  }
  else {
    bVar1 = false;
  }
  if ((param_2 != (char *)0x0) && (bVar1 == false)) {
    FUN_00a79118(param_2,0xffffffffffffffff,param_3);
  }
  return bVar1;
}


