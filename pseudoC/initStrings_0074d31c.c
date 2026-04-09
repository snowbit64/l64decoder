// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initStrings
// Entry Point: 0074d31c
// Size: 428 bytes
// Signature: undefined initStrings(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DebugMarkerManager::initStrings() */

void DebugMarkerManager::initStrings(void)

{
  long in_x0;
  LocalizationManager *pLVar1;
  undefined8 uVar2;
  
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"black");
  *(undefined8 *)(in_x0 + 0x18) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"silver");
  *(undefined8 *)(in_x0 + 0x20) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"gray");
  *(undefined8 *)(in_x0 + 0x28) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"white");
  *(undefined8 *)(in_x0 + 0x30) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"maroon");
  *(undefined8 *)(in_x0 + 0x38) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"red");
  *(undefined8 *)(in_x0 + 0x40) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"purple");
  *(undefined8 *)(in_x0 + 0x48) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"fuchsia");
  *(undefined8 *)(in_x0 + 0x50) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"green");
  *(undefined8 *)(in_x0 + 0x58) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"lime");
  *(undefined8 *)(in_x0 + 0x60) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"olive");
  *(undefined8 *)(in_x0 + 0x68) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"yellow");
  *(undefined8 *)(in_x0 + 0x70) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"navy");
  *(undefined8 *)(in_x0 + 0x78) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"blue");
  *(undefined8 *)(in_x0 + 0x80) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"teal");
  *(undefined8 *)(in_x0 + 0x88) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"aqua");
  *(undefined8 *)(in_x0 + 0x90) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"None");
  *(undefined8 *)(in_x0 + 0x98) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"NameTag");
  *(undefined8 *)(in_x0 + 0xa0) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"Diamond");
  *(undefined8 *)(in_x0 + 0xa8) = uVar2;
  pLVar1 = (LocalizationManager *)LocalizationManager::getInstance();
  uVar2 = LocalizationManager::getTranslatedString(pLVar1,"Diamond and Arrows");
  *(undefined8 *)(in_x0 + 0xb0) = uVar2;
  return;
}


