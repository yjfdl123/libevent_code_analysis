struct event_list{
    struct event * tqh_first;
    struct event ** tqh_last;
};

struct ev_next{								
	struct event *tqe_next;	/* next element */			
	struct event **tqe_prev;	/* address of previous next element */	
};
struct ev_active_next{								
	struct event *tqe_next;	/* next element */			
	struct event **tqe_prev;	/* address of previous next element */	
};
struct ev_signal_next{								
	struct event *tqe_next;	/* next element */			
	struct event **tqe_prev;	/* address of previous next element */	
};