// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOverlayTexture
// Entry Point: 006f5058
// Size: 68 bytes
// Signature: undefined __thiscall getOverlayTexture(OverlayRenderManager * this, IDisplay * param_1, uint param_2)


/* OverlayRenderManager::getOverlayTexture(IDisplay*, unsigned int) const */

undefined8 __thiscall
OverlayRenderManager::getOverlayTexture(OverlayRenderManager *this,IDisplay *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == (IDisplay *)0x0) ||
     (iVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1,param_2), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(this + 0x4008);
  }
  return uVar2;
}


