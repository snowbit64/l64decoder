// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findRegion
// Entry Point: 00a03d04
// Size: 8 bytes
// Signature: undefined __thiscall findRegion(PersistentShadowMap * this, LightSource * param_1, uint param_2)


/* PersistentShadowMap::findRegion(LightSource const*, unsigned int) const */

void __thiscall
PersistentShadowMap::findRegion(PersistentShadowMap *this,LightSource *param_1,uint param_2)

{
  DividedMap::findRegion(*(DividedMap **)(this + 0x10),param_1,param_2);
  return;
}


