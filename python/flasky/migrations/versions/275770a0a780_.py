"""empty message

Revision ID: 275770a0a780
Revises: 207e6ba79d61
Create Date: 2016-05-27 17:11:35.987860

"""

# revision identifiers, used by Alembic.
revision = '275770a0a780'
down_revision = '207e6ba79d61'

from alembic import op
import sqlalchemy as sa


def upgrade():
    ### commands auto generated by Alembic - please adjust! ###
    op.add_column('posts', sa.Column('body_html', sa.Text(), nullable=True))
    ### end Alembic commands ###


def downgrade():
    ### commands auto generated by Alembic - please adjust! ###
    op.drop_column('posts', 'body_html')
    ### end Alembic commands ###
