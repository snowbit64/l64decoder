// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestDeleteThis
// Entry Point: 0094cda0
// Size: 36 bytes
// Signature: undefined requestDeleteThis(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CustomShader::requestDeleteThis() const */

void CustomShader::requestDeleteThis(void)

{
  CustomShader *in_x0;
  MaterialManager *this;
  
  this = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::requestCustomShaderDelete(this,in_x0);
  return;
}


