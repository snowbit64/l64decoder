// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_30
// Entry Point: 009cbf78
// Size: 44 bytes
// Signature: undefined _INIT_30(void)


void _INIT_30(void)

{
  LocalizationManager *this;
  
  this = (LocalizationManager *)LocalizationManager::getInstance();
  ProceduralPlacementIndexMask::DONT_DRAW_TEXT =
       LocalizationManager::getTranslatedString(this,"dont draw");
  return;
}


