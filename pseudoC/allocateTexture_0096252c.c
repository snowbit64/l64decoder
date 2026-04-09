// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateTexture
// Entry Point: 0096252c
// Size: 920 bytes
// Signature: undefined __thiscall allocateTexture(Texture * this, BitmapImage * param_1, IRenderDevice * param_2, ICommandBuffer * param_3, ImageStreamingDesc * param_4)


/* Texture::allocateTexture(BitmapImage const&, IRenderDevice*, ICommandBuffer*, ImageStreamingDesc
   const*) const */

void __thiscall
Texture::allocateTexture
          (Texture *this,BitmapImage *param_1,IRenderDevice *param_2,ICommandBuffer *param_3,
          ImageStreamingDesc *param_4)

{
  Texture *pTVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pTVar1 = this + 0x31;
  if (((byte)this[0x30] & 1) != 0) {
    pTVar1 = *(Texture **)(this + 0x40);
  }
  uVar4 = PixelFormatUtil::getPixelFormat(param_1,param_1[0x2d] == (BitmapImage)0x0,(char *)pTVar1);
  if (param_1[0x2c] == (BitmapImage)0x0) {
    if (((byte)PixelFormatUtil::s_pixelFormats[(uVar4 & 0xffffffff) * 0x18 + 0xc] >> 1 & 1) == 0) {
      uVar8 = 0xffffffff;
      goto LAB_009625c4;
    }
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 4);
    if (uVar8 != 0) {
LAB_009625c4:
      uVar6 = NEON_cnt((ulong)*(uint *)(param_1 + 8),1);
      uVar9 = NEON_uaddlv(uVar6,1);
      if ((int)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar9) == 1) {
        uVar6 = NEON_cnt((ulong)*(uint *)(param_1 + 0xc),1);
        uVar9 = NEON_uaddlv(uVar6,1);
        if ((int)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar9) == 1) goto LAB_00962638;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 009627b0 to 009627bb has its CatchHandler @ 009628d0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pTVar1 = this + 0x31;
      if (((byte)this[0x30] & 1) != 0) {
        pTVar1 = *(Texture **)(this + 0x40);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning (performance): Width or height doesn\'t equal 2^n of mip-mapped texture %s.\n"
                        ,pTVar1);
    }
  }
LAB_00962638:
  if ((*(int *)(param_1 + 0x30) - 7U < 10) &&
     ((((byte)param_1[8] & 3) != 0 || (((byte)param_1[0xc] & 3) != 0)))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 009627f8 to 00962803 has its CatchHandler @ 009628cc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar7 = "Error: Block compressed texture, width or height doesn\'t equal 4*n.\n";
  }
  else {
    lVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    if ((*(uint *)(lVar5 + 0x68) < *(uint *)(param_1 + 8)) ||
       (*(uint *)(lVar5 + 0x68) < *(uint *)(param_1 + 0xc))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00962840 to 0096284b has its CatchHandler @ 009628c8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar7 = "Error: Texture, width or height too big.\n";
    }
    else {
      local_7c = 0x100000001;
      uStack_9c = 0x20000000200;
      local_a4 = 0xffffffffffffffff;
      uStack_8c = 0;
      local_94 = 0x100000001;
      local_b0 = 0;
      local_a8 = 0;
      local_84 = 3;
      local_80 = 0;
      uStack_6c = 0x3f80000000000000;
      local_74 = 0;
      local_64 = 0;
      local_60 = 0;
      uVar4 = buildTextureObjectDesc(this,param_1,uVar8,(TextureObjectDesc *)&local_b0,param_4);
      if ((uVar4 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)param_2 + 0x100))(param_2,param_3,&local_b0);
        goto LAB_00962774;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00962888 to 00962893 has its CatchHandler @ 009628c4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar7 = "Error: Texture with invalid format.\n";
    }
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar7);
  uVar6 = 0;
LAB_00962774:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


