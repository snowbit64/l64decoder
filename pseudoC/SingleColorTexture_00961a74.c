// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SingleColorTexture
// Entry Point: 00961a74
// Size: 180 bytes
// Signature: undefined __thiscall SingleColorTexture(SingleColorTexture * this, char * param_1, uint param_2, TextureDesc * param_3, TEX_TYPE param_4, uchar * param_5)


/* SingleColorTexture::SingleColorTexture(char const*, unsigned int, TextureDesc*,
   ITextureObject::TEX_TYPE, unsigned char*) */

void __thiscall
SingleColorTexture::SingleColorTexture
          (SingleColorTexture *this,char *param_1,uint param_2,TextureDesc *param_3,TEX_TYPE param_4
          ,uchar *param_5)

{
  SingleColorTexture SVar1;
  ushort uVar2;
  undefined8 *puVar3;
  
  Texture::Texture((Texture *)this,param_1,param_2,param_3);
  uVar2 = *(ushort *)(this + 0x48);
  *(ushort *)(this + 0x48) = uVar2 | 0x20;
  this[0x78] = (SingleColorTexture)*param_5;
  this[0x79] = *(SingleColorTexture *)(param_5 + 1);
  this[0x7a] = *(SingleColorTexture *)(param_5 + 2);
  SVar1 = *(SingleColorTexture *)(param_5 + 3);
  *(undefined ***)this = &PTR__SingleColorTexture_00fe05b0;
  *(undefined ***)(this + 0x10) = &PTR__SingleColorTexture_00fe05f8;
  this[0x7b] = SVar1;
  if (SVar1 != (SingleColorTexture)0xff) {
    *(ushort *)(this + 0x48) = uVar2 | 0x24;
  }
  *(undefined4 *)(this + 0x4c) = 5;
  *(TEX_TYPE *)(this + 0x50) = param_4;
                    /* try { // try from 00961af4 to 00961b17 has its CatchHandler @ 00961b28 */
  puVar3 = (undefined8 *)operator_new(8);
  *puVar3 = &PTR_reload_00fe0640;
  Resource::setCustomResourceReloader((Resource *)this,(CustomResourceReloader *)puVar3);
  return;
}


