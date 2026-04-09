// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTextureObjectDesc
// Entry Point: 009628f0
// Size: 408 bytes
// Signature: undefined __thiscall buildTextureObjectDesc(Texture * this, BitmapImage * param_1, uint param_2, TextureObjectDesc * param_3, ImageStreamingDesc * param_4)


/* Texture::buildTextureObjectDesc(BitmapImage const&, unsigned int, TextureObjectDesc&,
   ImageStreamingDesc const*) const */

bool __thiscall
Texture::buildTextureObjectDesc
          (Texture *this,BitmapImage *param_1,uint param_2,TextureObjectDesc *param_3,
          ImageStreamingDesc *param_4)

{
  Texture *pTVar1;
  Texture *pTVar2;
  undefined4 uVar3;
  uint uVar4;
  BitmapImage BVar5;
  bool bVar6;
  int iVar7;
  Logger *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pTVar1 = this + 0x31;
  param_3[0x30] = (TextureObjectDesc)((byte)this[0x48] >> 1 & 1);
  pTVar2 = pTVar1;
  if (((byte)this[0x30] & 1) != 0) {
    pTVar2 = *(Texture **)(this + 0x40);
  }
  iVar7 = PixelFormatUtil::getPixelFormat(param_1,param_1[0x2d] == (BitmapImage)0x0,(char *)pTVar2);
  uVar9 = *(undefined8 *)(param_1 + 8);
  bVar6 = iVar7 != 0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(param_3 + 0x2c) = iVar7;
  BVar5 = param_1[0x2c];
  *(undefined8 *)(param_3 + 0x14) = uVar9;
  *(undefined8 *)param_3 = uVar8;
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(BitmapImage *)(param_3 + 8) = BVar5;
  *(uint *)(param_3 + 0xc) = param_2;
  *(undefined4 *)(param_3 + 0x1c) = uVar3;
  if ((param_4 != (ImageStreamingDesc *)0x0) && (*(int *)(param_4 + 0xc) != 0)) {
    *(uint *)(param_3 + 0x10) = *(int *)(param_4 + 0xc) + param_2;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  if (uVar4 < 4) {
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(&DAT_004c4600 + (long)(int)uVar4 * 4);
  }
  else {
    *(undefined4 *)(param_3 + 0x28) = 5;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00962a48 to 00962a4f has its CatchHandler @ 00962a98 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00962a54 to 00962a57 has its CatchHandler @ 00962a88 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pTVar2 = pTVar1;
    if (((byte)this[0x30] & 1) != 0) {
      pTVar2 = *(Texture **)(this + 0x40);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Texture %s invalid texture type.\n",pTVar2);
    bVar6 = false;
    uVar4 = *(uint *)(param_1 + 0x38);
  }
  if (uVar4 == 3) {
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  }
  if (((byte)this[0x30] & 1) != 0) {
    pTVar1 = *(Texture **)(this + 0x40);
  }
  *(Texture **)(param_3 + 0x50) = pTVar1;
  return bVar6;
}


