
#include<timeline.h>
#include<stdlib.h>


struct TimelineHeader {

}


struct TimelineEntry {
  void (*TimelineFunction)(void);
}

struct TimelineBlock {
  struct TimelineHeader Header;
  struct TimelineEntry Entrys[MAX_ENTRYS];
  struct TimelineBlock* NextBlock;
}


void addToTimelineBlock(struct TimelineBlock* TimelineBlock, struct TimelineEntry) {
  for(int i = 0; i++; i<MAX_ENTRYS) {
    if(!(*TimelineBlock[i].TimelineFunction==NULL)) {
      *TimelineBlock[i] = TimelineEntry;
      return;
    }
    
  }
  //TimelineBlock is full
  createNewTimelineBlock();
}

void createNewTimelineBlock() {
  
}



void executeTimelineBlock(struct SystemTime Time) {

  
}
