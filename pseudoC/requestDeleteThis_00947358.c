// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestDeleteThis
// Entry Point: 00947358
// Size: 36 bytes
// Signature: undefined requestDeleteThis(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::requestDeleteThis() const */

void GsMaterial::requestDeleteThis(void)

{
  GsMaterial *in_x0;
  MaterialManager *this;
  
  this = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::requestMaterialDelete(this,in_x0);
  return;
}


