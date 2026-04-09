// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestDeleteThis
// Entry Point: 00b2b0ac
// Size: 36 bytes
// Signature: undefined requestDeleteThis(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Resource::requestDeleteThis() const */

void Resource::requestDeleteThis(void)

{
  Resource *in_x0;
  ResourceManager *this;
  
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::requestResourceDelete(this,in_x0);
  return;
}


