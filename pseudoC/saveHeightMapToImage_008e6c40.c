// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveHeightMapToImage
// Entry Point: 008e6c40
// Size: 192 bytes
// Signature: undefined __thiscall saveHeightMapToImage(BaseTerrain * this, char * param_1)


/* BaseTerrain::saveHeightMapToImage(char const*) */

uint __thiscall BaseTerrain::saveHeightMapToImage(BaseTerrain *this,char *param_1)

{
  long lVar1;
  uint uVar2;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  undefined2 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
    param_1 = (char *)(this + 0xc1);
    if (((byte)this[0xc0] & 1) != 0) {
      param_1 = (char *)*(BaseTerrain **)(this + 0xd0);
    }
  }
  local_70 = 0;
  uStack_64 = 0;
  local_58 = *(undefined8 *)(this + 0x80);
  local_38 = 0;
  local_78 = 0x100000001;
  local_80 = *(int *)(this + 0x90);
  local_34 = 0;
  uStack_6c = 1;
  uStack_68 = 3;
  local_30 = 0;
  local_60 = local_80 * local_80 * 2;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 1;
  iStack_7c = local_80;
  uVar2 = ImageSaveUtil::saveImage(param_1,(ImageDesc *)&local_80,true);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


