// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Texture
// Entry Point: 00961d24
// Size: 180 bytes
// Signature: undefined __thiscall Texture(Texture * this, char * param_1, uint param_2, TextureDesc * param_3)


/* Texture::Texture(char const*, unsigned int, TextureDesc*) */

void __thiscall Texture::Texture(Texture *this,char *param_1,uint param_2,TextureDesc *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  Resource::Resource((Resource *)this,param_1,param_2);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined2 *)(this + 0x48) = 1;
  *(undefined ***)this = &PTR__Texture_00fe0690;
  *(undefined ***)(this + 0x10) = &PTR__Texture_00fe06d8;
  if ((param_3 == (TextureDesc *)0x0) || (param_3[8] != (TextureDesc)0x0)) {
    *(undefined2 *)(this + 0x48) = 3;
  }
                    /* try { // try from 00961d74 to 00961d77 has its CatchHandler @ 00961dd8 */
  lVar2 = EngineManager::getInstance();
  if (param_3 == (TextureDesc *)0x0) {
    puVar3 = (undefined4 *)(lVar2 + 0x1fc);
  }
  else {
    if (param_3[0x10] != (TextureDesc)0x0) {
      *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) | 8;
    }
    if (param_3[0x11] != (TextureDesc)0x0) {
      *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) | 0x40;
    }
    puVar3 = (undefined4 *)(param_3 + 0xc);
  }
  uVar1 = *puVar3;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(short *)(this + 0x4a) = (short)uVar1;
  *(undefined8 *)(this + 0x4c) = 0x500000000;
  return;
}


