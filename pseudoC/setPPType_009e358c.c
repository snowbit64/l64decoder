// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPPType
// Entry Point: 009e358c
// Size: 36 bytes
// Signature: undefined setPPType(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRule::ProceduralPlacementObjectDesc::setPPType() */

void ProceduralPlacementRule::ProceduralPlacementObjectDesc::setPPType(void)

{
  ProceduralPlacementObjectDesc *in_x0;
  ProceduralPlacementManager *this;
  
  this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  ProceduralPlacementManager::setPPType(this,in_x0);
  return;
}


