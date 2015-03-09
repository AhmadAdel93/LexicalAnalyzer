#ifndef STATE_H
#define STATE_H
#include <vector>
#include "Edge.h"
#include "TokenClass.h"
#include <iostream>
class Edge;
class State
{
    public:

        State(TokenClass *tokenClass, bool accepting_state);
        void set_dead_state(bool dead_state);
        void add_edge(Edge* edge);
        void add_edge(State* to, char trans_char);
        vector <Edge*>* get_adjList();
        void set_accepting(bool accepting);
        TokenClass* get_token_class();
        void state_print();
        virtual ~State();
    protected:
    private:
        bool accepting;
        bool dead_state;
        int state_priority;
        TokenClass *token_class;
        std::vector<Edge*> *adjList;
};

#endif // STATE_H





