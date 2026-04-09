// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessAndXorBlock
// Entry Point: 00d20914
// Size: 260 bytes
// Signature: undefined __thiscall ProcessAndXorBlock(Enc * this, uchar * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::MDC<CryptoPP::SHA1>::Enc::ProcessAndXorBlock(unsigned char const*, unsigned char
   const*, unsigned char*) const */

void __thiscall
CryptoPP::MDC<CryptoPP::SHA1>::Enc::ProcessAndXorBlock
          (Enc *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = *(uint **)(this + 0x48);
  uVar1 = (*(uint *)param_1 & 0xff00ff00) >> 8 | (*(uint *)param_1 & 0xff00ff) << 8;
  *puVar5 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  puVar5[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
  puVar5[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
  puVar5[3] = uVar1 >> 0x10 | uVar1 << 0x10;
  puVar6 = *(uint **)(this + 0x28);
  uVar1 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8;
  puVar5[4] = uVar1 >> 0x10 | uVar1 << 0x10;
  SHA1::Transform(puVar5,puVar6);
  if (param_2 != (uchar *)0x0) {
    puVar5 = *(uint **)(this + 0x48);
    uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
    uVar2 = (puVar5[1] & 0xff00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
    uVar3 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8;
    uVar4 = (puVar5[3] & 0xff00ff00) >> 8 | (puVar5[3] & 0xff00ff) << 8;
    *puVar5 = uVar1 >> 0x10 | uVar1 << 0x10;
    puVar5[1] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar1 = (puVar5[4] & 0xff00ff00) >> 8 | (puVar5[4] & 0xff00ff) << 8;
    puVar5[2] = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar5[3] = uVar4 >> 0x10 | uVar4 << 0x10;
    puVar5[4] = uVar1 >> 0x10 | uVar1 << 0x10;
    xorbuf(param_3,param_2,(uchar *)puVar5,0x14);
    return;
  }
  puVar5 = *(uint **)(this + 0x48);
  uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
  *(uint *)param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar5[1] & 0xff00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
  *(uint *)(param_3 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8;
  *(uint *)(param_3 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar5[3] & 0xff00ff00) >> 8 | (puVar5[3] & 0xff00ff) << 8;
  *(uint *)(param_3 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar5[4] & 0xff00ff00) >> 8 | (puVar5[4] & 0xff00ff) << 8;
  *(uint *)(param_3 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


