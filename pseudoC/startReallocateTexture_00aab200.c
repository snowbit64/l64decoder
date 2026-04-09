// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startReallocateTexture
// Entry Point: 00aab200
// Size: 204 bytes
// Signature: undefined __cdecl startReallocateTexture(ICommandBuffer * param_1, ITextureObject * param_2, int param_3, uchar * param_4)


/* NullRenderDevice::startReallocateTexture(ICommandBuffer*, ITextureObject const*, int, unsigned
   char const*) */

NullTexture *
NullRenderDevice::startReallocateTexture
          (ICommandBuffer *param_1,ITextureObject *param_2,int param_3,uchar *param_4)

{
  long lVar1;
  NullTexture *this;
  ulong uVar2;
  uint uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  uVar3 = (uint)param_4;
  uVar2 = (ulong)(uint)param_3;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_68 = *(undefined8 *)(uVar2 + 0x30);
  local_70 = *(undefined8 *)(uVar2 + 0x28);
  uStack_58 = *(undefined8 *)(uVar2 + 0x40);
  uStack_60 = *(undefined8 *)(uVar2 + 0x38);
  uStack_48 = *(undefined8 *)(uVar2 + 0x50);
  local_50 = *(undefined8 *)(uVar2 + 0x48);
  local_90 = *(undefined8 *)(uVar2 + 8);
  local_40 = *(undefined8 *)(uVar2 + 0x58);
  uStack_80._4_4_ = (uint)((ulong)*(undefined8 *)(uVar2 + 0x18) >> 0x20);
  local_78._0_4_ = (uint)*(undefined8 *)(uVar2 + 0x20);
  if ((int)uVar3 < 1) {
    uStack_80._4_4_ = uStack_80._4_4_ >> (ulong)(-uVar3 & 0x1f);
    local_78._0_4_ = (uint)local_78 >> (ulong)(-uVar3 & 0x1f);
  }
  else {
    uStack_80._4_4_ = uStack_80._4_4_ << (ulong)(uVar3 & 0x1f);
    local_78._0_4_ = (uint)local_78 << (ulong)(uVar3 & 0x1f);
  }
  uStack_88._4_4_ = (int)((ulong)*(undefined8 *)(uVar2 + 0x10) >> 0x20);
  uStack_88 = CONCAT44(uStack_88._4_4_ + uVar3,(int)*(undefined8 *)(uVar2 + 0x10));
  this = (NullTexture *)operator_new(0x70);
                    /* try { // try from 00aab294 to 00aab29f has its CatchHandler @ 00aab2cc */
  NullTexture::NullTexture(this,(TextureObjectDesc *)&local_90,(NullRenderDevice *)param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


