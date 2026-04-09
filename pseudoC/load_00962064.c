// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00962064
// Size: 576 bytes
// Signature: undefined load(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Texture::load() */

void Texture::load(void)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  long in_x0;
  undefined *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined local_40;
  undefined7 uStack_3f;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar5 = *(byte *)(in_x0 + 0x20);
  if (((uint)bVar5 | *(uint *)(in_x0 + 0x18)) != 0) goto LAB_00962274;
  puVar7 = (undefined *)operator_new(0x40);
  bVar5 = *(byte *)(in_x0 + 0x30);
  pcVar12 = *(char **)(in_x0 + 0x40);
  pcVar1 = (char *)(in_x0 + 0x31);
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *puVar7 = 1;
  pcVar8 = pcVar1;
  if ((bVar5 & 1) != 0) {
    pcVar8 = pcVar12;
  }
  *(undefined **)(in_x0 + 0x58) = puVar7;
  pcVar8 = (char *)TextureUtil::getSpecificFilename(pcVar8);
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = 0x100000001;
  uVar2 = *(ushort *)(in_x0 + 0x48);
  local_50 = 0;
  local_98 = 0;
  local_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_40 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  if ((uVar2 >> 3 & 1) == 0) {
LAB_00962178:
    pcVar12 = pcVar1;
    if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
      pcVar12 = *(char **)(in_x0 + 0x40);
    }
    *(ushort *)(in_x0 + 0x48) = uVar2 & 0xffb7;
    bVar5 = TextureUtil::loadImage
                      (pcVar12,*(BitmapImage **)(in_x0 + 0x58),1,(uint)*(ushort *)(in_x0 + 0x4a),
                       false);
    bVar5 = bVar5 & 1;
  }
  else {
    uVar9 = TextureUtil::loadStreamableImage
                      (pcVar8,*(BitmapImage **)(in_x0 + 0x58),1,(uint)*(ushort *)(in_x0 + 0x4a),
                       (ImageStreamingDesc *)&local_b0);
    uVar2 = *(ushort *)(in_x0 + 0x48);
    if ((uVar9 & 1) == 0) goto LAB_00962178;
    *(ushort *)(in_x0 + 0x48) = uVar2 & 0xffbf;
    puVar10 = (undefined8 *)operator_new(0x78);
    *(undefined8 **)(in_x0 + 0x60) = puVar10;
    puVar10[9] = uStack_68;
    puVar10[8] = local_70;
    puVar10[0xb] = local_58;
    puVar10[10] = uStack_60;
    puVar10[0xd] = CONCAT62(uStack_46,uStack_48);
    puVar10[0xc] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
    puVar10[1] = uStack_a8;
    *puVar10 = local_b0;
    puVar10[3] = local_98;
    puVar10[2] = uStack_a0;
    puVar10[0xe] = CONCAT71(uStack_3f,local_40);
    bVar5 = 1;
    puVar10[5] = uStack_88;
    puVar10[4] = local_90;
    puVar10[7] = CONCAT44(uStack_74,local_78);
    puVar10[6] = uStack_80;
  }
  *(byte *)(in_x0 + 0x20) = bVar5;
  pcVar12 = pcVar1;
  if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
    pcVar12 = *(char **)(in_x0 + 0x40);
  }
  if ((pcVar8 != (char *)0x0) && (pcVar8 != pcVar12)) {
    operator_delete__(pcVar8);
    bVar5 = *(byte *)(in_x0 + 0x20);
  }
  *(ushort *)(in_x0 + 0x48) = *(ushort *)(in_x0 + 0x48) & 0xfffb;
  if (bVar5 == 0) {
    *(undefined8 *)(in_x0 + 0x4c) = 0x500000000;
  }
  else {
    if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(in_x0 + 0x40);
    }
    uVar6 = PixelFormatUtil::getPixelFormat
                      (*(BitmapImage **)(in_x0 + 0x58),
                       (*(BitmapImage **)(in_x0 + 0x58))[0x2d] == (BitmapImage)0x0,pcVar1);
    *(uint *)(in_x0 + 0x4c) = uVar6;
    uVar3 = *(uint *)(*(long *)(in_x0 + 0x58) + 0x38);
    if (uVar3 < 4) {
      uVar11 = *(undefined4 *)(&DAT_004c4600 + (long)(int)uVar3 * 4);
    }
    else {
      uVar11 = 5;
    }
    *(undefined4 *)(in_x0 + 0x50) = uVar11;
    if ((PixelFormatUtil::s_pixelFormats[(ulong)uVar6 * 0x18 + 0xc] & 1) != 0) {
      *(ushort *)(in_x0 + 0x48) = *(ushort *)(in_x0 + 0x48) | 4;
    }
  }
  bVar5 = *(byte *)(in_x0 + 0x20);
LAB_00962274:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5 != 0);
}


