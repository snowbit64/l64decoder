// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderPostItems
// Entry Point: 00a22b60
// Size: 40 bytes
// Signature: undefined __thiscall renderPostItems(RenderQueue * this, uint param_1, SectionType param_2, ICommandBuffer * param_3)


/* RenderQueue::renderPostItems(unsigned int, RenderQueue::SectionType, ICommandBuffer*) const */

void __thiscall
RenderQueue::renderPostItems
          (RenderQueue *this,uint param_1,SectionType param_2,ICommandBuffer *param_3)

{
  ScreenSpaceProcessor *this_00;
  
  if ((param_1 - 2 < 3) && (param_2 == 0)) {
    this_00 = *(ScreenSpaceProcessor **)(*(RenderArgs **)(this + 0x28) + 0x560);
    if (this_00 != (ScreenSpaceProcessor *)0x0) {
      ScreenSpaceProcessor::processPostFxOpaque(this_00,param_3,*(RenderArgs **)(this + 0x28));
      return;
    }
  }
  return;
}


