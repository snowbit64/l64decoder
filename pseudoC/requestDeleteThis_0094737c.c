// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestDeleteThis
// Entry Point: 0094737c
// Size: 36 bytes
// Signature: undefined __thiscall requestDeleteThis(GsMaterial * this)


/* non-virtual thunk to GsMaterial::requestDeleteThis() const */

void __thiscall GsMaterial::requestDeleteThis(GsMaterial *this)

{
  MaterialManager *this_00;
  
  this_00 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::requestMaterialDelete(this_00,this + -0x20);
  return;
}


