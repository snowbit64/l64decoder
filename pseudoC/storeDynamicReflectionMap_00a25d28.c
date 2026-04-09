// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storeDynamicReflectionMap
// Entry Point: 00a25d28
// Size: 232 bytes
// Signature: undefined __thiscall storeDynamicReflectionMap(ReflectionRenderController * this, GsShape * param_1, ITextureObject * param_2)


/* ReflectionRenderController::storeDynamicReflectionMap(GsShape const*, ITextureObject*) */

void __thiscall
ReflectionRenderController::storeDynamicReflectionMap
          (ReflectionRenderController *this,GsShape *param_1,ITextureObject *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(this + 0x40);
  puVar3 = (undefined8 *)*puVar2;
  puVar1 = puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(this + 0x40);
    do {
      while (puVar1 = puVar3, param_1 < (GsShape *)puVar1[4]) {
        puVar2 = puVar1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar1;
          goto joined_r0x00a25dd8;
        }
      }
      if (param_1 <= (GsShape *)puVar1[4]) break;
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
  puVar3 = (undefined8 *)*puVar2;
joined_r0x00a25dd8:
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x30);
    puVar3[4] = param_1;
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar1;
    *puVar2 = puVar3;
    puVar1 = puVar3;
    if (**(long **)(this + 0x38) != 0) {
      *(long *)(this + 0x38) = **(long **)(this + 0x38);
      puVar1 = (undefined8 *)*puVar2;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x40),(__tree_node_base *)puVar1);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
  }
  puVar3[5] = param_2;
  return;
}


